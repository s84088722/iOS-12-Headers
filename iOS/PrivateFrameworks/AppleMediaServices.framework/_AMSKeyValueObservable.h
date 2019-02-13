//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface _AMSKeyValueObservable : AMSObservable
{
    NSObject *_context;
    NSString *_keyPath;
    NSObject *_object;
}

@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)sendCompletion;
- (_Bool)cancel;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;

@end

