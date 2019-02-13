//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class AAUIServerHookResponse, NSDictionary, NSHTTPURLResponse, RUIElement, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@protocol AAUIServerHook <NSObject>
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate;
- (void)processObjectModel:(RUIObjectModel *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)processElement:(RUIElement *)arg1 attributes:(NSDictionary *)arg2 objectModel:(RUIObjectModel *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (_Bool)shouldMatchModel:(RUIObjectModel *)arg1;
- (_Bool)shouldMatchElement:(RUIElement *)arg1;

@optional
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
- (void)harvestDataFromResponse:(NSHTTPURLResponse *)arg1;
@end

