//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BLSinfsArray : NSObject
{
    NSArray *_sinfs;
}

@property(retain, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (void).cxx_destruct;
- (_Bool)_isRecognizedProperty:(id)arg1;
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;
- (id)initWithSINFs:(id)arg1;

@end

