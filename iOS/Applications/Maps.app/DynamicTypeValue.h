//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DynamicTypeValue : NSObject
{
    CDUnknownBlockType _fontProvider;
    double _unscaledValue;
}

@property(nonatomic) double unscaledValue; // @synthesize unscaledValue=_unscaledValue;
@property(copy, nonatomic) CDUnknownBlockType fontProvider; // @synthesize fontProvider=_fontProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) double scaledValue;

@end
