//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface BABookmarkItem : NSObject
{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
}

@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;

@end
