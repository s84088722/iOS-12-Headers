//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (SafariSharedExtras)
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithUserTypedString:(id)arg1;
- (id)safari_wellKnownChangePasswordURL;
- (_Bool)safari_isWellKnownChangePasswordURL;
@property(readonly, nonatomic) _Bool safari_isURLTooLongToDisplay;
- (id)safari_userVisibleStringConsideringLongURLs;
- (_Bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;
@property(readonly, nonatomic) _Bool safari_isTopLevelURL;
- (id)safari_URLWithUniqueFilename;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleString;
- (id)safari_originalDataAsString;
- (id)safari_displayNameWithTitle:(id)arg1;
- (_Bool)safari_hasCharactersBeyondPath;
- (id)safari_canonicalURL;
- (id)safari_URLByDeletingUserAndPassword;
- (_Bool)safari_hasUserOrPassword;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLByRemovingUserAndPath;
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;
@property(readonly, nonatomic) _Bool safari_isEligibleToShowNotSecureWarning;
@property(readonly, nonatomic) _Bool safari_isLocalOrPrivateNetworkURL;
@property(readonly, nonatomic) _Bool safari_isSafariResourceURL;
@property(readonly, nonatomic) _Bool safari_isBlobURL;
- (_Bool)safari_isDataURL;
- (_Bool)safari_isHTTPURL;
- (_Bool)safari_isHTTPFamilyURL;
- (_Bool)safari_hasScheme:(id)arg1;
- (id)safari_path;
@end

