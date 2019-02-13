//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSArray, UIPrintInteractionController, UIPrintPaper, UIViewController;

@protocol UIPrintInteractionControllerDelegate <NSObject>

@optional
- (long long)printInteractionController:(UIPrintInteractionController *)arg1 chooseCutterBehavior:(NSArray *)arg2;
- (double)printInteractionController:(UIPrintInteractionController *)arg1 cutLengthForPaper:(UIPrintPaper *)arg2;
- (void)printInteractionControllerDidFinishJob:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillStartJob:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (UIPrintPaper *)printInteractionController:(UIPrintInteractionController *)arg1 choosePaper:(NSArray *)arg2;
- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
@end

