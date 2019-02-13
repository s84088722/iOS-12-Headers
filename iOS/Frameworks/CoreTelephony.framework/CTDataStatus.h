//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _attached;
    _Bool _roamAllowed;
    _Bool _dataPlanSignalingReductionOverride;
    _Bool _cellularDataPossible;
    _Bool _inHomeCountry;
    int _indicator;
    int _indicatorOverride;
    int _radioTechnology;
    unsigned int _activeContexts;
    unsigned int _totalActiveContexts;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool inHomeCountry; // @synthesize inHomeCountry=_inHomeCountry;
@property(nonatomic) unsigned int totalActiveContexts; // @synthesize totalActiveContexts=_totalActiveContexts;
@property(nonatomic) unsigned int activeContexts; // @synthesize activeContexts=_activeContexts;
@property(nonatomic) _Bool cellularDataPossible; // @synthesize cellularDataPossible=_cellularDataPossible;
@property(nonatomic) _Bool dataPlanSignalingReductionOverride; // @synthesize dataPlanSignalingReductionOverride=_dataPlanSignalingReductionOverride;
@property(nonatomic) int radioTechnology; // @synthesize radioTechnology=_radioTechnology;
@property(nonatomic) _Bool roamAllowed; // @synthesize roamAllowed=_roamAllowed;
@property(nonatomic) int indicatorOverride; // @synthesize indicatorOverride=_indicatorOverride;
@property(nonatomic) int indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool attached; // @synthesize attached=_attached;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

