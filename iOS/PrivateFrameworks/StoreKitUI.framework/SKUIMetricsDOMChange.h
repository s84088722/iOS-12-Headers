//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary;

@interface SKUIMetricsDOMChange : NSObject <NSCopying>
{
    _Bool _fromDeferredMessage;
    double _buildStartTime;
    double _buildEndTime;
    double _renderStartTime;
    double _renderEndTime;
}

@property(nonatomic, getter=isFromDeferredMessage) _Bool fromDeferredMessage; // @synthesize fromDeferredMessage=_fromDeferredMessage;
@property(nonatomic) double renderEndTime; // @synthesize renderEndTime=_renderEndTime;
@property(nonatomic) double renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(nonatomic) double buildEndTime; // @synthesize buildEndTime=_buildEndTime;
@property(nonatomic) double buildStartTime; // @synthesize buildStartTime=_buildStartTime;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportDomBuildTimesMessagePayload:(id)arg1;

@end
