//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QLDismissAction : NSObject
{
    _Bool _shouldDismissQuickLookAutomatically;
    NSString *_title;
    CDUnknownBlockType _completionHandler;
    long long _alertStyle;
}

+ (id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool shouldDismissQuickLookAutomatically; // @synthesize shouldDismissQuickLookAutomatically=_shouldDismissQuickLookAutomatically;
@property(nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;

@end

