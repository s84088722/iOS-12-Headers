//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CarMapsSuggestionsCardViewController;

@protocol CarMapsSuggestionsCardViewControllerDelegate
- (void)suggestionsCardDidHandOff:(CarMapsSuggestionsCardViewController *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)suggestionsCardDidAccept:(CarMapsSuggestionsCardViewController *)arg1 navigationType:(unsigned long long)arg2;
- (void)suggestionsCardDidDismiss:(CarMapsSuggestionsCardViewController *)arg1;
@end
