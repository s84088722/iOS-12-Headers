//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDMMCSPackageSignatureGenerator : NSObject
{
    _Bool _valid;
    void *_generator;
}

@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) void *generator; // @synthesize generator=_generator;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)arg1;
- (char *)_finishGenerator;
- (void)dealloc;
- (id)init;

@end

