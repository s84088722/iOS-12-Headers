//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/DOCThumbnail-Protocol.h>
#import <DocumentManagerUICore/DOCThumbnailListener-Protocol.h>
#import <DocumentManagerUICore/DOCThumbnailOperationDelegate-Protocol.h>

@class DOCThumbnailCache, NSHashTable, NSOperation, NSString, UIImage;
@protocol DOCThumbnail, OS_dispatch_queue;

@interface DOCBaseThumbnail : NSObject <DOCThumbnail, DOCThumbnailListener, DOCThumbnailOperationDelegate>
{
    _Bool _representativeIcon;
    _Bool _needsUpdate;
    _Bool _isInteractive;
    DOCThumbnailCache *_cache;
    double _scale;
    id <DOCThumbnail> _fallback;
    unsigned long long _style;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    UIImage *_thumbnailImage;
    NSOperation *_operation;
    struct CGSize _size;
}

@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) id <DOCThumbnail> fallback; // @synthesize fallback=_fallback;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) __weak DOCThumbnailCache *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool representativeIcon; // @synthesize representativeIcon=_representativeIcon;
- (void).cxx_destruct;
- (void)notifyListeners;
- (void)scheduleUpdateIfNeeded;
- (void)startOperation;
- (void)thumbnailOperationFailedToLoadThumbnail:(id)arg1;
- (void)thumbnailOperation:(id)arg1 didLoadThumbnail:(id)arg2 representativeIcon:(_Bool)arg3;
- (void)thumbnailLoaded:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)setNeedsUpdate;
- (id)createOperationWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isInteractive:(_Bool)arg4;
- (void)kickstart;
- (void)dealloc;
- (id)initWithCache:(id)arg1 queueLabel:(const char *)arg2 size:(struct CGSize)arg3 scale:(double)arg4 fallback:(id)arg5 style:(unsigned long long)arg6 isInteractive:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

