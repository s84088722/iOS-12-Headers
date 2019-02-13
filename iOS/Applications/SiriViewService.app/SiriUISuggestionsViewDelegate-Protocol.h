//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SiriUISuggestionsView, UIView;

@protocol SiriUISuggestionsViewDelegate <NSObject>

@optional
- (_Bool)suggestionsViewIsInTextInputMode:(SiriUISuggestionsView *)arg1;
- (double)contentWidthForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)suggestionsView:(SiriUISuggestionsView *)arg1 didHideVibrantView:(UIView *)arg2;
- (double)statusViewHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (double)statusBarHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)didShowSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (NSArray *)nextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)getNextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2 completion:(void (^)(NSArray *))arg3;
@end

