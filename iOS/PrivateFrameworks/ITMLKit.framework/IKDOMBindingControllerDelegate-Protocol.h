//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKDOMBindingController, IKDataBinding, NSSet, NSString;

@protocol IKDOMBindingControllerDelegate <NSObject>

@optional
- (void)domBindingController:(IKDOMBindingController *)arg1 didResolveKeys:(NSSet *)arg2;
- (_Bool)domBindingController:(IKDOMBindingController *)arg1 applyValue:(id)arg2 forKey:(NSString *)arg3;
- (NSSet *)additionalKeysToResolveForDOMBindingController:(IKDOMBindingController *)arg1;
- (_Bool)domBindingController:(IKDOMBindingController *)arg1 doKeysAffectSubtree:(NSSet *)arg2;
- (_Bool)domBindingController:(IKDOMBindingController *)arg1 doKeysAffectChildren:(NSSet *)arg2;
- (_Bool)shouldResolveDataForDOMBindingController:(IKDOMBindingController *)arg1;
- (void)domBindingController:(IKDOMBindingController *)arg1 didLoadBinding:(IKDataBinding *)arg2;
@end

