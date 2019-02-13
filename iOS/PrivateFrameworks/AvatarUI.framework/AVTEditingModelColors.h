//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/NSCopying-Protocol.h>

@class AVTAvatarColorVariationStore, NSDictionary;

@interface AVTEditingModelColors : NSObject <NSCopying>
{
    AVTAvatarColorVariationStore *_variationStore;
    struct NSDictionary *_storage;
}

+ (void)createColorsForPaletteCategory:(long long)arg1 inCache:(id)arg2;
+ (id)buildAllColors;
@property(readonly, nonatomic) NSDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) AVTAvatarColorVariationStore *variationStore; // @synthesize variationStore=_variationStore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)colorsForSettingKind:(CDStruct_597dd055)arg1;
- (id)colorForSettingKind:(CDStruct_597dd055)arg1 identifier:(id)arg2;
- (id)initWithStorage:(struct NSDictionary *)arg1 variationStore:(id)arg2;
- (id)init;

@end

