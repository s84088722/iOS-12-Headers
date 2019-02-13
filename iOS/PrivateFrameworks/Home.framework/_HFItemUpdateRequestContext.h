//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HFUpdateLogger, NSDictionary;
@protocol HFCharacteristicReadPolicy;

@interface _HFItemUpdateRequestContext : NSObject <NSCopying>
{
    SEL _senderSelector;
    NSDictionary *_updateOptions;
    HFUpdateLogger *_logger;
    id <HFCharacteristicReadPolicy> _readPolicy;
}

@property(retain, nonatomic) id <HFCharacteristicReadPolicy> readPolicy; // @synthesize readPolicy=_readPolicy;
@property(retain, nonatomic) HFUpdateLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSDictionary *updateOptions; // @synthesize updateOptions=_updateOptions;
@property(nonatomic) SEL senderSelector; // @synthesize senderSelector=_senderSelector;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

