//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class NSArray, NSString, NSUUID, UIImage;

@protocol CPBaseTemplateProviding <NSObject>
- (void)setBarButton:(NSUUID *)arg1 title:(NSString *)arg2;
- (void)setBarButton:(NSUUID *)arg1 image:(UIImage *)arg2;
- (void)setControl:(NSUUID *)arg1 enabled:(_Bool)arg2;
- (void)setTrailingNavigationBarButtons:(NSArray *)arg1;
- (void)setLeadingNavigationBarButtons:(NSArray *)arg1;
@end

