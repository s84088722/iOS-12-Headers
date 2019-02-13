//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject;
@protocol OS_xpc_object;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy
{
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int hostContextId; // @synthesize hostContextId=_hostContextId;
@property(readonly, nonatomic) unsigned int childContextId; // @synthesize childContextId=_childContextId;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
- (void).cxx_destruct;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;

@end

