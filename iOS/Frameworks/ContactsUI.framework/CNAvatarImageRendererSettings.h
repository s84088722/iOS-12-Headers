//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRendererSettings : NSObject
{
    unsigned long long _style;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNUILikenessRendering> _likenessRenderer;
}

+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 schedulerProvider:(id)arg3;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)defaultSettings;
@property(readonly, nonatomic) id <CNUILikenessRendering> likenessRenderer; // @synthesize likenessRenderer=_likenessRenderer;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3;

@end

