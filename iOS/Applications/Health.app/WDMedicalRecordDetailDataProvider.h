//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthRecordsStore, HKMedicalRecord, NSMutableDictionary;
@protocol OS_dispatch_queue, WDMedicalRecordDetailDataProviderDelegate;

@interface WDMedicalRecordDetailDataProvider : NSObject
{
    HKHealthRecordsStore *_healthRecordsStore;
    HKMedicalRecord *_medicalRecord;
    id <WDMedicalRecordDetailDataProviderDelegate> _delegate;
    NSMutableDictionary *_displayItemsBySection;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSMutableDictionary *displayItemsBySection; // @synthesize displayItemsBySection=_displayItemsBySection;
@property(nonatomic) __weak id <WDMedicalRecordDetailDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (void).cxx_destruct;
- (void)_updatePlacementForDisplayItems:(id)arg1;
- (long long)sectionFHIRSourceData;
- (void)_rqueue_recomputeDisplayItems;
- (id)displayItemForSection:(long long)arg1 row:(long long)arg2;
- (id)displayItemsForSection:(long long)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithHealthRecordsStore:(id)arg1 medicalRecord:(id)arg2 delegate:(id)arg3;

@end

