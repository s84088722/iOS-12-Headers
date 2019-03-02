/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFSafeBrowsingWebProcessController.h>

@protocol _SFSafeBrowsingWarningResponseObserver;
@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface, _SFSecurityInfo, NSDictionary, NSMutableSet, NSString;

@interface _SFWebProcessPlugInPageSafeBrowsingController : NSObject <_SFSafeBrowsingWebProcessController> {

	_SFWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _safeBrowsingControllerInterface;
	_SFSecurityInfo* _securityInfo;
	BOOL _canGoBack;
	/*^block*/id _completionHandler;
	id<_SFSafeBrowsingWarningResponseObserver> _responseObserver;
	NSDictionary* _localizedStrings;
	NSMutableSet* _safeURLCache;
	NSMutableSet* _provisionalURLsNeedingSafeBrowsingCheck;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(BOOL)arg2 ;
-(void)safeBrowsingDatabaseDidUpdate;
-(void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 canGoBack:(BOOL)arg2 localizedStrings:(id)arg3 ;
-(id)initWithPageController:(id)arg1 ;
-(void)_setUpSafeBrowsingControllerInterface;
-(void)_clearSafeBrowsingControllerInterface;
-(BOOL)urlPassesFastSafeBrowsingCheck:(id)arg1 ;
-(BOOL)_canSkipSafeBrowsingCheckForURL:(id)arg1 ;
-(id)_responseObserverProxy;
-(void)performSafeBrowsingCheckForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanUpForNewPageLoad;
-(void)injectPhishingAlertBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)securityWarningPageLoaded;
-(void)didRespondToSecurityWarning:(long long)arg1 ;
-(id)localizedStringForString:(id)arg1 ;
-(void)dealloc;
@end
