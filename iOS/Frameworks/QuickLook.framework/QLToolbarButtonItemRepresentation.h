//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class NSString, QLPreviewController, QLToolbarButton;

__attribute__((visibility("hidden")))
@interface QLToolbarButtonItemRepresentation : UIBarButtonItem
{
    NSString *_identifier;
    unsigned long long _placement;
    QLPreviewController *_presentingViewController;
    QLToolbarButton *_originalButton;
}

@property __weak QLToolbarButton *originalButton; // @synthesize originalButton=_originalButton;
@property __weak QLPreviewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property unsigned long long placement; // @synthesize placement=_placement;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

