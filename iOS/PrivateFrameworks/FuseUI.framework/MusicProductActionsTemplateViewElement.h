//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSData, NSString;

@interface MusicProductActionsTemplateViewElement : SKUIViewElement
{
    NSArray *_customJSActionTitles;
    NSString *_reportingFeatureName;
    NSData *_reportingRecommendationData;
}

@property(readonly, nonatomic) NSData *reportingRecommendationData; // @synthesize reportingRecommendationData=_reportingRecommendationData;
@property(readonly, nonatomic) NSString *reportingFeatureName; // @synthesize reportingFeatureName=_reportingFeatureName;
@property(readonly, nonatomic) NSArray *customJSActionTitles; // @synthesize customJSActionTitles=_customJSActionTitles;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

