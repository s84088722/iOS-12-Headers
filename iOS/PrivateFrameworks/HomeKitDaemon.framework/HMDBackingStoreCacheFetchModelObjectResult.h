//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject
{
    CKRecord *_record;
    HMDBackingStoreModelObject *_object;
}

@property(readonly, nonatomic) HMDBackingStoreModelObject *object; // @synthesize object=_object;
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;

@end

