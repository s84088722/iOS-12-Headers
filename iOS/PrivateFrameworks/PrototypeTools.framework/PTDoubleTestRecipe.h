//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTTestRecipe.h>

@interface PTDoubleTestRecipe : PTTestRecipe
{
    CDUnknownBlockType _increaseAction;
    CDUnknownBlockType _decreaseAction;
}

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 increaseAction:(CDUnknownBlockType)arg3 decreaseAction:(CDUnknownBlockType)arg4 cleanupBlock:(CDUnknownBlockType)arg5;
+ (id)recipeWithTitle:(id)arg1 increaseAction:(CDUnknownBlockType)arg2 decreaseAction:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType decreaseAction; // @synthesize decreaseAction=_decreaseAction;
@property(copy, nonatomic) CDUnknownBlockType increaseAction; // @synthesize increaseAction=_increaseAction;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;

@end

