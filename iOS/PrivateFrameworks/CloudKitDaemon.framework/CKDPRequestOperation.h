//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPArchiveRecordsRequest, CKDPAssetUploadTokenRetrieveRequest, CKDPBundlesForContainerRequest, CKDPCodeFunctionInvokeRequest, CKDPDeleteCommentRequest, CKDPDeleteContainerRequest, CKDPFetchArchivedRecordsRequest, CKDPGetCommentRequest, CKDPGetCommentsRequest, CKDPGetLikesRequest, CKDPLikeRequest, CKDPMescalCertificateRequest, CKDPMescalSessionInfoRequest, CKDPMescalSignatureRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPOperation, CKDPPostCommentRequest, CKDPPulseRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordResolveTokenRequest, CKDPRecordRetrieveAncestorsRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPRequestOperationHeader, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareDeleteRequest, CKDPShareRetrieveRequest, CKDPShareSaveRequest, CKDPShareTokenDeleteRequest, CKDPShareTokenRetrieveRequest, CKDPShareTokenSaveRequest, CKDPShareVettingInitiateRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUnlikeRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying>
{
    CKDPArchiveRecordsRequest *_archiveRecordsRequest;
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPBundlesForContainerRequest *_bundlesForContainerRequest;
    CKDPDeleteCommentRequest *_deleteCommentRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPFetchArchivedRecordsRequest *_fetchArchivedRecordsRequest;
    CKDPCodeFunctionInvokeRequest *_functionInvokeRequest;
    CKDPGetCommentRequest *_getCommentRequest;
    CKDPGetCommentsRequest *_getCommentsRequest;
    CKDPGetLikesRequest *_getLikesRequest;
    CKDPRequestOperationHeader *_header;
    CKDPLikeRequest *_likeRequest;
    CKDPMescalCertificateRequest *_mescalCertificateRequest;
    CKDPMescalSessionInfoRequest *_mescalSessionInfoRequest;
    CKDPMescalSignatureRequest *_mescalSignatureRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPPostCommentRequest *_postCommentRequest;
    CKDPPulseRequest *_pulseRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordResolveTokenRequest *_recordResolveTokenRequest;
    CKDPRecordRetrieveAncestorsRequest *_recordRetrieveAncestorsRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareAcceptRequest *_shareAcceptRequest;
    CKDPShareDeleteRequest *_shareDeleteRequest;
    CKDPShareRetrieveRequest *_shareRetrieveRequest;
    CKDPShareSaveRequest *_shareSaveRequest;
    CKDPShareTokenDeleteRequest *_shareTokenDeleteRequest;
    CKDPShareTokenRetrieveRequest *_shareTokenRetrieveRequest;
    CKDPShareTokenSaveRequest *_shareTokenSaveRequest;
    CKDPShareVettingInitiateRequest *_shareVettingInitiateRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUnlikeRequest *_unlikeRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest *_webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest *_zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property(retain, nonatomic) CKDPOperation *request; // @synthesize request=_request;
@property(retain, nonatomic) CKDPRequestOperationHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasHeader;
@property(retain, nonatomic) CKDPShareSaveRequest *shareSaveRequest;
@property(readonly, nonatomic) _Bool hasShareSaveRequest;
@property(retain, nonatomic) CKDPShareRetrieveRequest *shareRetrieveRequest;
@property(readonly, nonatomic) _Bool hasShareRetrieveRequest;
@property(retain, nonatomic) CKDPShareDeleteRequest *shareDeleteRequest;
@property(readonly, nonatomic) _Bool hasShareDeleteRequest;
@property(retain, nonatomic) CKDPShareAcceptRequest *shareAcceptRequest;
@property(readonly, nonatomic) _Bool hasShareAcceptRequest;
@property(retain, nonatomic) CKDPShareTokenSaveRequest *shareTokenSaveRequest;
@property(readonly, nonatomic) _Bool hasShareTokenSaveRequest;
@property(retain, nonatomic) CKDPShareTokenRetrieveRequest *shareTokenRetrieveRequest;
@property(readonly, nonatomic) _Bool hasShareTokenRetrieveRequest;
@property(retain, nonatomic) CKDPShareTokenDeleteRequest *shareTokenDeleteRequest;
@property(readonly, nonatomic) _Bool hasShareTokenDeleteRequest;
@property(retain, nonatomic) CKDPShareVettingInitiateRequest *shareVettingInitiateRequest;
@property(readonly, nonatomic) _Bool hasShareVettingInitiateRequest;
@property(retain, nonatomic) CKDPZoneSaveRequest *zoneSaveRequest;
@property(readonly, nonatomic) _Bool hasZoneSaveRequest;
@property(retain, nonatomic) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property(readonly, nonatomic) _Bool hasZoneRetrieveRequest;
@property(retain, nonatomic) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property(readonly, nonatomic) _Bool hasZoneDeleteRequest;
@property(retain, nonatomic) CKDPZoneRetrieveChangesRequest *zoneRetrieveChangesRequest;
@property(readonly, nonatomic) _Bool hasZoneRetrieveChangesRequest;
@property(retain, nonatomic) CKDPRecordSaveRequest *recordSaveRequest;
@property(readonly, nonatomic) _Bool hasRecordSaveRequest;
@property(retain, nonatomic) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveRequest;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveVersionsRequest;
@property(retain, nonatomic) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveChangesRequest;
@property(retain, nonatomic) CKDPRecordDeleteRequest *recordDeleteRequest;
@property(readonly, nonatomic) _Bool hasRecordDeleteRequest;
@property(retain, nonatomic) CKDPRecordRetrieveAncestorsRequest *recordRetrieveAncestorsRequest;
@property(readonly, nonatomic) _Bool hasRecordRetrieveAncestorsRequest;
@property(retain, nonatomic) CKDPRecordResolveTokenRequest *recordResolveTokenRequest;
@property(readonly, nonatomic) _Bool hasRecordResolveTokenRequest;
@property(retain, nonatomic) CKDPFetchArchivedRecordsRequest *fetchArchivedRecordsRequest;
@property(readonly, nonatomic) _Bool hasFetchArchivedRecordsRequest;
@property(retain, nonatomic) CKDPUserAvailableQuotaRequest *userAvailableQuotaRequest;
@property(readonly, nonatomic) _Bool hasUserAvailableQuotaRequest;
@property(retain, nonatomic) CKDPUserRetrieveRequest *userRetrieveRequest;
@property(readonly, nonatomic) _Bool hasUserRetrieveRequest;
@property(retain, nonatomic) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property(readonly, nonatomic) _Bool hasQueryRetrieveRequest;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property(readonly, nonatomic) _Bool hasAssetUploadTokenRetrieveRequest;
@property(retain, nonatomic) CKDPDeleteContainerRequest *deleteContainerRequest;
@property(readonly, nonatomic) _Bool hasDeleteContainerRequest;
@property(retain, nonatomic) CKDPBundlesForContainerRequest *bundlesForContainerRequest;
@property(readonly, nonatomic) _Bool hasBundlesForContainerRequest;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveRequest *webAuthTokenRetrieveRequest;
@property(readonly, nonatomic) _Bool hasWebAuthTokenRetrieveRequest;
@property(retain, nonatomic) CKDPCodeFunctionInvokeRequest *functionInvokeRequest;
@property(readonly, nonatomic) _Bool hasFunctionInvokeRequest;
@property(retain, nonatomic) CKDPPostCommentRequest *postCommentRequest;
@property(readonly, nonatomic) _Bool hasPostCommentRequest;
@property(retain, nonatomic) CKDPGetCommentsRequest *getCommentsRequest;
@property(readonly, nonatomic) _Bool hasGetCommentsRequest;
@property(retain, nonatomic) CKDPGetCommentRequest *getCommentRequest;
@property(readonly, nonatomic) _Bool hasGetCommentRequest;
@property(retain, nonatomic) CKDPDeleteCommentRequest *deleteCommentRequest;
@property(readonly, nonatomic) _Bool hasDeleteCommentRequest;
@property(retain, nonatomic) CKDPLikeRequest *likeRequest;
@property(readonly, nonatomic) _Bool hasLikeRequest;
@property(retain, nonatomic) CKDPUnlikeRequest *unlikeRequest;
@property(readonly, nonatomic) _Bool hasUnlikeRequest;
@property(retain, nonatomic) CKDPGetLikesRequest *getLikesRequest;
@property(readonly, nonatomic) _Bool hasGetLikesRequest;
@property(retain, nonatomic) CKDPPulseRequest *pulseRequest;
@property(readonly, nonatomic) _Bool hasPulseRequest;
@property(retain, nonatomic) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionCreateRequest;
@property(retain, nonatomic) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionRetrieveRequest;
@property(retain, nonatomic) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property(readonly, nonatomic) _Bool hasSubscriptionDeleteRequest;
@property(retain, nonatomic) CKDPArchiveRecordsRequest *archiveRecordsRequest;
@property(readonly, nonatomic) _Bool hasArchiveRecordsRequest;
@property(retain, nonatomic) CKDPUserQueryRequest *userQueryRequest;
@property(readonly, nonatomic) _Bool hasUserQueryRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsUpdateRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsResetRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsBatchLookupRequest;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsRetrieveRequest;
@property(retain, nonatomic) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property(readonly, nonatomic) _Bool hasTokenRegistrationRequest;
@property(retain, nonatomic) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property(readonly, nonatomic) _Bool hasTokenUnregistrationRequest;
@property(retain, nonatomic) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property(readonly, nonatomic) _Bool hasSetBadgeCountRequest;
@property(retain, nonatomic) CKDPNotificationSyncRequest *notificationSyncRequest;
@property(readonly, nonatomic) _Bool hasNotificationSyncRequest;
@property(retain, nonatomic) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property(readonly, nonatomic) _Bool hasNotificationMarkReadRequest;
@property(retain, nonatomic) CKDPMescalCertificateRequest *mescalCertificateRequest;
@property(readonly, nonatomic) _Bool hasMescalCertificateRequest;
@property(retain, nonatomic) CKDPMescalSessionInfoRequest *mescalSessionInfoRequest;
@property(readonly, nonatomic) _Bool hasMescalSessionInfoRequest;
@property(retain, nonatomic) CKDPMescalSignatureRequest *mescalSignatureRequest;
@property(readonly, nonatomic) _Bool hasMescalSignatureRequest;

@end

