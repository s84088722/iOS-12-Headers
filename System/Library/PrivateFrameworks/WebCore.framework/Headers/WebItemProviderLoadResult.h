//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSItemProvider;

__attribute__((visibility("hidden")))
@interface WebItemProviderLoadResult : NSObject
{
    struct RetainPtr<NSMutableDictionary<NSString *, NSURL *>> _fileURLs;
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<NSArray<NSString *>> _typesToLoad;
}

+ (id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) NSArray *loadedTypeIdentifiers;
@property(readonly, nonatomic) NSArray *loadedFileURLs;
- (void)setFileURL:(id)arg1 forType:(id)arg2;
- (id)fileURLForType:(id)arg1;
@property(readonly, nonatomic) NSArray *typesToLoad;
@property(readonly, nonatomic) _Bool canBeRepresentedAsFileUpload;
- (id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2;

@end
