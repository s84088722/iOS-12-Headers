//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIGridViewElementPageSectionConfiguration, SKUIViewElement;

@protocol SKUIGridViewElementPageSectionConfigurationDataSource <NSObject>
- (SKUIViewElement *)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 viewElementForIndexPath:(NSIndexPath *)arg2;

@optional
- (void)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 configurePosition:(inout long long *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
@end

