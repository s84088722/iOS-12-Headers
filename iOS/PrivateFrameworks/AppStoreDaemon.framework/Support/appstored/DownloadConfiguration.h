//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DataConsumerDefinition, DownloadDataConsumer, NSArray, NSDictionary, NSError, NSNumber, NSString, NSURLRequest, NSUUID;

@interface DownloadConfiguration : NSObject
{
    _Bool _delta;
    _Bool _requiresPowerPluggedIn;
    _Bool _shouldUseStreamingZip;
    _Bool _overrideProgress;
    NSUUID *_coordinatorPromiseID;
    NSString *_clientIdentifier;
    NSString *_clientSecondaryIdentifier;
    DownloadDataConsumer *_dataConsumer;
    long long _discretionary;
    NSString *_destinationPath;
    NSDictionary *_streamingZipOptions;
    long long _taskPriority;
    long long _bytesPerSecondLimit;
    double _timeoutIntervalForRequest;
    NSNumber *_loadingPriority;
    DataConsumerDefinition *_dataConsumerDefinition;
    long long _result;
    NSURLRequest *_URLRequest;
    long long _jobID;
    long long _downloadID;
    long long _mediaAssetIdentifier;
    NSString *_bundleID;
    NSString *_kind;
    long long _automaticType;
    NSArray *_backgroundOperations;
    NSError *_error;
    long long _diskUsage;
    unsigned long long _mediaAssetOffset;
    long long _mediaAssetSize;
    double _transferProgressFraction;
}

+ (void)configureConnectionPools;
@property(nonatomic) double transferProgressFraction; // @synthesize transferProgressFraction=_transferProgressFraction;
@property(nonatomic) long long mediaAssetSize; // @synthesize mediaAssetSize=_mediaAssetSize;
@property(nonatomic) unsigned long long mediaAssetOffset; // @synthesize mediaAssetOffset=_mediaAssetOffset;
@property(nonatomic) long long diskUsage; // @synthesize diskUsage=_diskUsage;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *backgroundOperations; // @synthesize backgroundOperations=_backgroundOperations;
@property(nonatomic) long long automaticType; // @synthesize automaticType=_automaticType;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) long long mediaAssetIdentifier; // @synthesize mediaAssetIdentifier=_mediaAssetIdentifier;
@property(nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;
@property(nonatomic) long long jobID; // @synthesize jobID=_jobID;
@property(copy, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) _Bool overrideProgress; // @synthesize overrideProgress=_overrideProgress;
@property(copy, nonatomic) DataConsumerDefinition *dataConsumerDefinition; // @synthesize dataConsumerDefinition=_dataConsumerDefinition;
@property(copy, nonatomic) NSNumber *loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) long long bytesPerSecondLimit; // @synthesize bytesPerSecondLimit=_bytesPerSecondLimit;
@property(nonatomic) long long taskPriority; // @synthesize taskPriority=_taskPriority;
@property(retain, nonatomic) NSDictionary *streamingZipOptions; // @synthesize streamingZipOptions=_streamingZipOptions;
@property(nonatomic) _Bool shouldUseStreamingZip; // @synthesize shouldUseStreamingZip=_shouldUseStreamingZip;
@property(nonatomic) _Bool requiresPowerPluggedIn; // @synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) long long discretionary; // @synthesize discretionary=_discretionary;
@property(nonatomic, getter=isDelta) _Bool delta; // @synthesize delta=_delta;
@property(retain, nonatomic) DownloadDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
@property(copy, nonatomic) NSString *clientSecondaryIdentifier; // @synthesize clientSecondaryIdentifier=_clientSecondaryIdentifier;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSUUID *coordinatorPromiseID; // @synthesize coordinatorPromiseID=_coordinatorPromiseID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *URLSessionIdentifier;
- (id)sessionTaskWithSession:(id)arg1;
- (id)sessionConfiguration;

@end

