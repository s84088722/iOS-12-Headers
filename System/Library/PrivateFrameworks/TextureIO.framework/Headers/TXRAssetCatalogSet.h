//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TXRAssetCatalogSet : NSObject
{
    unsigned long long _interpretation;
    unsigned long long _origin;
    NSString *_name;
    _Bool _cubemap;
    NSMutableArray *_configs;
}

@property(readonly, nonatomic) _Bool cubemap; // @synthesize cubemap=_cubemap;
@property(readonly) NSArray *configs; // @synthesize configs=_configs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(nonatomic) unsigned long long interpretation; // @synthesize interpretation=_interpretation;
- (void).cxx_destruct;
- (_Bool)addConfig:(id)arg1 error:(id *)arg2;
- (id)exportAtLocation:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

