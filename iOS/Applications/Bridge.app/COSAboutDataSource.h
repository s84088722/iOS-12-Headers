//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSSpecifierDataSource.h>

@class NRDevice, NSArray, NSNumber, NSSManager, NSString;

@interface COSAboutDataSource : PSSpecifierDataSource
{
    _Bool _hasStartedFetchingAboutInfo;
    _Bool _hasFetchedAboutInfo;
    _Bool _errorOccurredFetchingAboutInfo;
    _Bool _displayNetworkProgressIndicator;
    _Bool _showRegulatoryModelNumber;
    _Bool _pairedWatchHasTelephonyCapability;
    _Bool _hasFetchedRemoteBundleInfo;
    _Bool _errorOccurredFetchingRemoteBundleInfo;
    _Bool _hasReceivedCellularPlanUpdate;
    NSSManager *_nssManager;
    NRDevice *_device;
    NSNumber *_numberOfApps;
    NSNumber *_numberOfSongs;
    NSNumber *_numberOfPhotos;
    unsigned long long _storageAvailable;
    NSString *_carrierName;
    NSString *_carrierVersion;
    NSArray *_simICCIDs;
    unsigned long long _iccidDisplayIndex;
    NSString *_changedName;
    struct __CTServerConnection *_ctConnection;
}

@property(nonatomic) struct __CTServerConnection *ctConnection; // @synthesize ctConnection=_ctConnection;
@property(copy, nonatomic) NSString *changedName; // @synthesize changedName=_changedName;
@property(nonatomic) _Bool hasReceivedCellularPlanUpdate; // @synthesize hasReceivedCellularPlanUpdate=_hasReceivedCellularPlanUpdate;
@property(nonatomic) _Bool errorOccurredFetchingRemoteBundleInfo; // @synthesize errorOccurredFetchingRemoteBundleInfo=_errorOccurredFetchingRemoteBundleInfo;
@property(nonatomic) _Bool hasFetchedRemoteBundleInfo; // @synthesize hasFetchedRemoteBundleInfo=_hasFetchedRemoteBundleInfo;
@property(nonatomic) unsigned long long iccidDisplayIndex; // @synthesize iccidDisplayIndex=_iccidDisplayIndex;
@property(retain, nonatomic) NSArray *simICCIDs; // @synthesize simICCIDs=_simICCIDs;
@property(retain, nonatomic) NSString *carrierVersion; // @synthesize carrierVersion=_carrierVersion;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(nonatomic) _Bool pairedWatchHasTelephonyCapability; // @synthesize pairedWatchHasTelephonyCapability=_pairedWatchHasTelephonyCapability;
@property(nonatomic) _Bool showRegulatoryModelNumber; // @synthesize showRegulatoryModelNumber=_showRegulatoryModelNumber;
@property(nonatomic) unsigned long long storageAvailable; // @synthesize storageAvailable=_storageAvailable;
@property(retain, nonatomic) NSNumber *numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(retain, nonatomic) NSNumber *numberOfSongs; // @synthesize numberOfSongs=_numberOfSongs;
@property(retain, nonatomic) NSNumber *numberOfApps; // @synthesize numberOfApps=_numberOfApps;
@property(nonatomic) _Bool displayNetworkProgressIndicator; // @synthesize displayNetworkProgressIndicator=_displayNetworkProgressIndicator;
@property(nonatomic) _Bool errorOccurredFetchingAboutInfo; // @synthesize errorOccurredFetchingAboutInfo=_errorOccurredFetchingAboutInfo;
@property(nonatomic) _Bool hasFetchedAboutInfo; // @synthesize hasFetchedAboutInfo=_hasFetchedAboutInfo;
@property(nonatomic) _Bool hasStartedFetchingAboutInfo; // @synthesize hasStartedFetchingAboutInfo=_hasStartedFetchingAboutInfo;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
- (void).cxx_destruct;
- (void)showUserManual:(id)arg1;
- (void)tappedAppleLegalLink;
- (void)updateICCIDSpecifier:(id)arg1;
- (id)getICCID:(id)arg1;
- (id)getIMEI:(id)arg1;
- (id)getCarrierInfo:(id)arg1;
- (id)getBTAddress:(id)arg1;
- (id)getWiFiAddress:(id)arg1;
- (id)getSerialNumber:(id)arg1;
- (void)updateModelSpecifier:(id)arg1;
- (id)getDeviceModel:(id)arg1;
- (id)getSystemVersion:(id)arg1;
- (id)getStorageCapacity:(id)arg1;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (id)getDeviceName:(id)arg1;
- (id)getStorageAvailable:(id)arg1;
- (id)getNumberOfApps:(id)arg1;
- (id)getNumberOfPhotos:(id)arg1;
- (id)getNumberOfSongs:(id)arg1;
- (id)guardedUint64StringValue:(unsigned long long)arg1;
- (id)dash;
- (void)handleRetrievedICCIDs:(id)arg1;
- (void)handleRemoteBundleInfo:(id)arg1 success:(_Bool)arg2;
- (void)handleAboutInfo:(id)arg1 error:(id)arg2;
- (void)hideNetworkActivityIndicatorOnceRemoteQueriesHaveCompleted;
- (void)displayNetworkActivityIndicator:(_Bool)arg1;
- (void)queryPairedDevice;
- (void)loadSpecifiers;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (void)dealloc;
- (id)init;

@end

