//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBrowserCell.h>

@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell
{
    CKAppInstallation *_installation;
    CKBrowserIconView *_browserIconView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CKBrowserIconView *browserIconView; // @synthesize browserIconView=_browserIconView;
@property(retain, nonatomic) CKAppInstallation *installation; // @synthesize installation=_installation;
- (void).cxx_destruct;
- (id)iconView;
- (void)layoutSubviews;

@end

