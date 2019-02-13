//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying>
{
    long long _defaultSectionIndex;
    NSArray *_sections;
    long long _style;
    UIColor *_tintColor;
    long long _tintStyle;
}

@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long defaultSectionIndex; // @synthesize defaultSectionIndex=_defaultSectionIndex;
- (long long)_sectionStyleForString:(id)arg1;
- (_Bool)loadFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSectionsDictionary:(id)arg1;

@end

