//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncOnceOperation, FCFlintManifest, FCFlintResourceManager, NSMutableArray;
@protocol NUFontRegistration;

@interface NUANFFontLoader : NSObject
{
    long long _relativePriority;
    FCFlintManifest *_flintManifest;
    FCFlintResourceManager *_flintResourceManager;
    NSMutableArray *_fontResourcesToRegister;
    NSMutableArray *_fontResourcesRegistered;
    FCAsyncOnceOperation *_asyncOnceOperation;
    id <NUFontRegistration> _fontRegistration;
}

@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(readonly, nonatomic) NSMutableArray *fontResourcesRegistered; // @synthesize fontResourcesRegistered=_fontResourcesRegistered;
@property(readonly, nonatomic) NSMutableArray *fontResourcesToRegister; // @synthesize fontResourcesToRegister=_fontResourcesToRegister;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(readonly, nonatomic) FCFlintManifest *flintManifest; // @synthesize flintManifest=_flintManifest;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
- (void).cxx_destruct;
- (id)asyncLoadFontsOnceWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadFontsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterFontsWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerFontsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 fontRegistration:(id)arg3;

@end

