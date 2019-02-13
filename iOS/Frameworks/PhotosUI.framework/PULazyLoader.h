//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PULazyLoaderDelegate;

__attribute__((visibility("hidden")))
@interface PULazyLoader : NSObject
{
    struct {
        _Bool respondsToDidLoadItem;
    } _delegateFlags;
    id _item;
    CDUnknownBlockType _loadingBlock;
    id <PULazyLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <PULazyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CDUnknownBlockType loadingBlock; // @synthesize loadingBlock=_loadingBlock;
- (void).cxx_destruct;
- (void)invalidateItem;
- (id)itemLoadIfNeeded:(_Bool)arg1;
- (id)initWithLoadingBlock:(CDUnknownBlockType)arg1;

@end

