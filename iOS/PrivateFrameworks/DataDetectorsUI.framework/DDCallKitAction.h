//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDCallAction.h>

@class TUCallProvider;

__attribute__((visibility("hidden")))
@interface DDCallKitAction : DDCallAction
{
    TUCallProvider *_callProvider;
}

+ (id)callKitProviders;
+ (_Bool)hostApplicationIsEntitled;
@property(retain) TUCallProvider *callProvider; // @synthesize callProvider=_callProvider;
- (void).cxx_destruct;
- (id)localizedName;
- (long long)TTYType;

@end

