//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IXSLimitedConcurrencyOperation : NSObject
{
    NSString *_descString;
    CDUnknownBlockType _block;
}

@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *descString; // @synthesize descString=_descString;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1 description:(id)arg2;

@end

