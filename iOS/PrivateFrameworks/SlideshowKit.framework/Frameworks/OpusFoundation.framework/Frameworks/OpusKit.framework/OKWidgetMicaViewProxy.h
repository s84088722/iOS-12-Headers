//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKWidgetMicaViewProxyExports-Protocol.h>

@class NSDictionary, NSString, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports>
{
    NSString *_resourceName;
    NSDictionary *_options;
    OKWidgetMicaDocument *_micaDocument;
    _Bool _scaleToFit;
    _Bool _autoplay;
    double _duration;
    double _seekToTime;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) OKWidgetMicaDocument *micaDocument; // @synthesize micaDocument=_micaDocument;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (_Bool)isPlaying;
- (void)restart;
- (void)resume;
- (void)pause;
- (void)prepareForRefresh;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)updateMicaDocumentLayer;
- (void)unloadMicaDocument;
- (void)loadMicaDocumentIfNeeded;
- (void)setSettingDuration:(double)arg1;
- (double)settingDuration;
- (void)setSettingSeekToTime:(double)arg1;
- (double)settingSeekToTime;
- (void)setSettingAutoplay:(_Bool)arg1;
- (_Bool)settingAutoplay;
- (void)setSettingScaleToFit:(_Bool)arg1;
- (_Bool)settingScaleToFit;
- (void)setSettingResource:(id)arg1;
- (id)settingResource;
- (void)setSettingOptions:(id)arg1;
- (id)settingOptions;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

