//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HULinkedApplicationView, NSString;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol>
{
    HULinkedApplicationView *_linkedApplicationView;
}

@property(retain, nonatomic) HULinkedApplicationView *linkedApplicationView; // @synthesize linkedApplicationView=_linkedApplicationView;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
