//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchController.h>

@class NSMutableString, SKUISearchBar, UILabel;
@protocol SKUISearchControllerDelegate;

@interface SKUISearchController : UISearchController
{
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SKUISearchBar *_searchBar;
}

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) SKUISearchBar *searchBar;
- (void)setActive:(_Bool)arg1;
- (void)_setSuffix:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SKUISearchControllerDelegate> delegate; // @dynamic delegate;

@end

