//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DOCTabbedBrowserViewController.h"

@class DOCConfiguration;

@interface _TtC5Files21DRIMainViewController : DOCTabbedBrowserViewController
{
}

- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (void)documentBrowser:(id)arg1 didPickImportedURLs:(id)arg2;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)viewDidLoad;
@property(nonatomic, retain) DOCConfiguration *configuration;

@end

