//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol FRArticleLoaderType;

@interface FRFeldsparLinkErrorViewController : UIViewController
{
    _Bool _previewingMode;
    _Bool _isAlertShownOnce;
    unsigned long long _accessStatus;
    id <FRArticleLoaderType> _articleLoader;
}

@property(retain, nonatomic) id <FRArticleLoaderType> articleLoader; // @synthesize articleLoader=_articleLoader;
@property(nonatomic) _Bool isAlertShownOnce; // @synthesize isAlertShownOnce=_isAlertShownOnce;
@property(nonatomic) unsigned long long accessStatus; // @synthesize accessStatus=_accessStatus;
@property(nonatomic) _Bool previewingMode; // @synthesize previewingMode=_previewingMode;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccessStatus:(unsigned long long)arg1 articleLoader:(id)arg2;

@end

