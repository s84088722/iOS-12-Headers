//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFObservable.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MFCombineLatestObservable : MFObservable
{
    NSArray *_observables;
}

@property(copy, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end

