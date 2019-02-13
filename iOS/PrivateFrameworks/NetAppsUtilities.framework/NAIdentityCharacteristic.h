//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAEquatable-Protocol.h>
#import <NetAppsUtilities/NAHashable-Protocol.h>
#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NAIdentityCharacteristic : NSObject <NAHashable, NAEquatable, NSCopying>
{
    CDUnknownBlockType _retrievalBlock;
    CDUnknownBlockType _comparisonBlock;
    CDUnknownBlockType _hashBlock;
    long long _role;
}

@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
@property(copy, nonatomic) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(copy, nonatomic) CDUnknownBlockType retrievalBlock; // @synthesize retrievalBlock=_retrievalBlock;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

