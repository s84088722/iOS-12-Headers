//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class UIColor;

@interface MusicMediaDetailTintInformation : NSObject <NSCopying>
{
    UIColor *_separatorColor;
    _Bool _backgroundColorLight;
    UIColor *_actionableColor;
    UIColor *_backgroundColor;
    UIColor *_primaryTextColor;
}

@property(readonly, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(readonly, nonatomic, getter=isBackgroundColorLight) _Bool backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *actionableColor; // @synthesize actionableColor=_actionableColor;
- (void).cxx_destruct;
- (void)configureJSEventDictionary:(id)arg1;
@property(readonly, nonatomic) UIColor *separatorColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArtworkColorAnalysis:(id)arg1;

@end

