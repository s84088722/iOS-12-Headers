//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@class NSString;

@interface FCCancelHandler : NSObject <FCOperationCanceling>
{
    CDUnknownBlockType _cancelBlock;
    id _weakTarget;
    id _strongTarget;
    SEL _selector;
}

+ (id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id strongTarget; // @synthesize strongTarget=_strongTarget;
@property(nonatomic) __weak id weakTarget; // @synthesize weakTarget=_weakTarget;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

