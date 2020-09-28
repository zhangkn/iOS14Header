/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNewsAppConfiguration.h>
#import <libobjc.A.dylib/FCCoreConfiguration.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NSArray, FCIAdConfiguration, FCPrefetchConfiguration, NSString, NTPBDiscoverMoreVideosInfo, FCNotificationsConfiguration, NSDictionary, FCTopStoriesConfiguration, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber, FCPaidBundleConfiguration, NSDate, FCPersonalizationTreatment, FCWidgetConfig;

@interface FCNewsAppConfig : NSObject <FCNewsAppConfiguration, FCCoreConfiguration, FCJSONEncodableObjectProviding> {

	BOOL _privateDataEncryptionAllowed;
	BOOL _privateDataEncryptionMigrationDesired;
	BOOL _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
	BOOL _privateDataMigrationCleanupEnabled;
	BOOL _privateDataShouldSecureSubscriptions;
	BOOL _privateDataEncryptionRequired;
	FCVideoGroupsConfig* _forYouVideoGroupsConfig;
	NSDictionary* _endpointConfigsByEnvironment;
	FCNotificationsConfiguration* _notificationsConfig;
	FCTopStoriesConfiguration* _topStoriesConfig;
	FCForYouGroupsConfiguration* _forYouGroupsConfiguration;
	FCIAdConfiguration* _iAdConfig;
	FCPrefetchConfiguration* _prefetchConfig;
	NTPBDiscoverMoreVideosInfo* _shareDiscoverMoreVideosInfo;
	FCPaidBundleConfiguration* _paidBundleConfig;
	NSDictionary* _configDictionary;
	NSString* _storefrontID;
	NSDictionary* _languageConfigDictionary;
	NSDate* _lastModificationDate;
	FCPersonalizationTreatment* _cachedPersonalizationTreatment;
	NSArray* _externalAnalyticsConfigurations;
	NSDictionary* _analyticsContentTypeConfigsByContentTypeByEnvironment;
	FCWidgetConfig* _widgetConfig;

}

@property (nonatomic,readonly) NSDictionary * configDictionary;                                                                        //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                                           //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,readonly) NSDictionary * languageConfigDictionary;                                                                //@synthesize languageConfigDictionary=_languageConfigDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                                                                          //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,readonly) FCPersonalizationTreatment * cachedPersonalizationTreatment;                                            //@synthesize cachedPersonalizationTreatment=_cachedPersonalizationTreatment - In the implementation block
@property (nonatomic,retain) NSArray * externalAnalyticsConfigurations;                                                                //@synthesize externalAnalyticsConfigurations=_externalAnalyticsConfigurations - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsContentTypeConfigsByContentTypeByEnvironment;                                   //@synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment - In the implementation block
@property (nonatomic,readonly) FCWidgetConfig * widgetConfig;                                                                          //@synthesize widgetConfig=_widgetConfig - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultConfiguration; 
@property (nonatomic,readonly) NSArray * onboardingFeedIDs; 
@property (nonatomic,readonly) long long autoScrollToTopFeedTimeout; 
@property (nonatomic,readonly) double interstitialAdLoadDelay; 
@property (nonatomic,readonly) double prerollLoadingTimeout; 
@property (nonatomic,readonly) double tileProminenceScoreBalanceValue; 
@property (nonatomic,readonly) FCIAdConfiguration * iAdConfig;                                                                         //@synthesize iAdConfig=_iAdConfig - In the implementation block
@property (nonatomic,readonly) FCPrefetchConfiguration * prefetchConfig;                                                               //@synthesize prefetchConfig=_prefetchConfig - In the implementation block
@property (nonatomic,readonly) long long newFavoriteNotificationAlertsFrequency; 
@property (nonatomic,readonly) long long notificationArticleCacheTimeout; 
@property (nonatomic,readonly) long long notificationArticleWithRapidUpdatesCacheTimeout; 
@property (nonatomic,readonly) NSString * embedConfigurationAssetID; 
@property (nonatomic,readonly) BOOL universalLinksEnabled; 
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) NSString * widgetConfigID; 
@property (nonatomic,readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; 
@property (nonatomic,readonly) unsigned widgetMinimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationStart; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationEnd; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationSlope; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationYIntercept; 
@property (nonatomic,readonly) long long analyticsEndpointMaxPayloadSize; 
@property (nonatomic,readonly) NSString * personalizationBundleIdMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationUrlMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationWhitelistResourceId; 
@property (nonatomic,readonly) NSString * personalizationFavorabilityResourceId; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForArticleList; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForSingleArticle; 
@property (nonatomic,readonly) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; 
@property (nonatomic,readonly) NSString * exploreArticleID; 
@property (nonatomic,readonly) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (nonatomic,readonly) long long stateRestorationAllowedTimeWindow; 
@property (nonatomic,readonly) long long autoRefreshMinimumInterval; 
@property (nonatomic,readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (nonatomic,copy,readonly) NSArray * topStoriesPublishDates; 
@property (nonatomic,readonly) unsigned long long trendingStyle; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo;                                               //@synthesize shareDiscoverMoreVideosInfo=_shareDiscoverMoreVideosInfo - In the implementation block
@property (nonatomic,readonly) NSString * articleRecirculationComponentPlacementConfigJSON; 
@property (nonatomic,readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds; 
@property (nonatomic,readonly) long long subscriptionsPlacardGlobalMaximumPerDay; 
@property (nonatomic,readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) long long articleRecirculationPopularFeedQueryTimeRange; 
@property (nonatomic,readonly) BOOL disableThumbnailsForArticleRecirculation; 
@property (nonatomic,readonly) NSString * feedNavigationConfigJSON; 
@property (nonatomic,readonly) NSString * webEmbedContentBlockers; 
@property (nonatomic,readonly) NSString * webEmbedContentBlockerOverrides; 
@property (nonatomic,readonly) NSString * anfRenderingConfiguration; 
@property (nonatomic,readonly) BOOL enableBadgeInSpotlightTabBar; 
@property (nonatomic,readonly) NSString * translationMapResourceID; 
@property (nonatomic,readonly) NSString * issueArticleRecirculationConfigJSON; 
@property (getter=isArticleToolbarCompressionEnabled,nonatomic,readonly) BOOL articleToolbarCompressionEnabled; 
@property (nonatomic,readonly) long long lowStorageThreshold; 
@property (nonatomic,readonly) long long criticalStorageThreshold; 
@property (nonatomic,readonly) long long feedContentExposureTestMaximumInterval; 
@property (nonatomic,readonly) long long maximumTrendingGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumTrendingGroupSizeiPhone; 
@property (nonatomic,readonly) unsigned long long likeDislikeBehavior; 
@property (nonatomic,readonly) unsigned long long bestOfBundleFeedGroupKind; 
@property (nonatomic,readonly) long long emailSignupRequiredAppLaunchCount; 
@property (nonatomic,readonly) double newsletterSubscriptionStatusCacheTimeout; 
@property (nonatomic,readonly) long long newsletterSubscriptionType; 
@property (nonatomic,readonly) BOOL enableLocationBasedAutofavorites; 
@property (nonatomic,readonly) NSString * localAreasMappingResourceId; 
@property (nonatomic,readonly) NSString * tagFeedLayoutConfigurationResourceId; 
@property (nonatomic,readonly) NSString * userVectorWhitelistResourceId; 
@property (nonatomic,readonly) NSString * userVectorModelResourceId; 
@property (nonatomic,readonly) long long articleReadCountThreshold; 
@property (nonatomic,readonly) BOOL forYouGroupShouldPromoteAccessibleHeadline; 
@property (nonatomic,readonly) double adRequestThrottle; 
@property (nonatomic,readonly) BOOL widgetContentPrefetchEnabled; 
@property (nonatomic,readonly) BOOL notificationEnableAssetPrefetching; 
@property (nonatomic,readonly) BOOL notificationAssetPrefetchingRequiresWatch; 
@property (nonatomic,readonly) long long appConfigRefreshRate; 
@property (nonatomic,readonly) long long trendingTopicsRefreshRate; 
@property (getter=isOrderFeedEndpointEnabled,nonatomic,readonly) BOOL orderFeedEndpointEnabled; 
@property (nonatomic,readonly) FCNotificationsConfiguration * notificationsConfig;                                                     //@synthesize notificationsConfig=_notificationsConfig - In the implementation block
@property (nonatomic,readonly) long long notificationEnabledChannelsRefreshFrequency; 
@property (nonatomic,readonly) long long savedArticlesCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesOpenedCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountWiFi; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountCellular; 
@property (nonatomic,readonly) long long subscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) NSArray * presubscribedFeedIDs; 
@property (nonatomic,readonly) BOOL useSecureConnectionForAssets; 
@property (getter=isPrivateDataEncryptionAllowed,nonatomic,readonly) BOOL privateDataEncryptionAllowed;                                //@synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed - In the implementation block
@property (getter=isPrivateDataEncryptionMigrationDesired,nonatomic,readonly) BOOL privateDataEncryptionMigrationDesired;              //@synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired - In the implementation block
@property (nonatomic,readonly) BOOL privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;                                     //@synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris - In the implementation block
@property (getter=isPrivateDataMigrationCleanupEnabled,nonatomic,readonly) BOOL privateDataMigrationCleanupEnabled;                    //@synthesize privateDataMigrationCleanupEnabled=_privateDataMigrationCleanupEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointConfigsByEnvironment;                                                            //@synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment - In the implementation block
@property (nonatomic,readonly) FCTopStoriesConfiguration * topStoriesConfig;                                                           //@synthesize topStoriesConfig=_topStoriesConfig - In the implementation block
@property (nonatomic,readonly) NSString * breakingNewsChannelID; 
@property (nonatomic,readonly) NSString * briefingsTagID; 
@property (nonatomic,readonly) NSString * trendingTagID; 
@property (nonatomic,readonly) NSString * featuredStoriesTagID; 
@property (nonatomic,readonly) NSString * savedStoriesTagID; 
@property (nonatomic,readonly) NSString * editorialChannelID; 
@property (nonatomic,readonly) NSString * editorialGemsSectionID; 
@property (nonatomic,readonly) long long articleRapidUpdatesTimeout; 
@property (nonatomic,readonly) NSArray * hiddenFeedIDs; 
@property (nonatomic,readonly) FCForYouGroupsConfiguration * forYouGroupsConfiguration;                                                //@synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration - In the implementation block
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekend; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekend; 
@property (nonatomic,readonly) long long expiredPaidSubscriptionGroupCutoffTime; 
@property (nonatomic,readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups; 
@property (nonatomic,readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPhone; 
@property (nonatomic,readonly) BOOL diversifyOptionalTopStories; 
@property (nonatomic,readonly) long long optionalTopStoriesRefreshRate; 
@property (nonatomic,readonly) double minimumTrendingUnseenRatio; 
@property (nonatomic,copy,readonly) FCVideoGroupsConfig * forYouVideoGroupsConfig;                                                     //@synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig - In the implementation block
@property (nonatomic,readonly) double endOfArticleMinPaidHeadlineRatio; 
@property (nonatomic,readonly) long long endOfArticleMaxInaccessiblePaidArticleCount; 
@property (nonatomic,readonly) long long minimumDistanceBetweenImageOnTopTiles; 
@property (nonatomic,readonly) NSString * forYouRecordConfigID; 
@property (nonatomic,readonly) NSString * experimentalizableFieldPostfix; 
@property (nonatomic,readonly) NSNumber * currentTreatment; 
@property (nonatomic,readonly) long long expirePinnedArticlesAfter; 
@property (nonatomic,readonly) NSString * engagementCohortsExpField; 
@property (nonatomic,readonly) NSString * conversionCohortsExpField; 
@property (nonatomic,readonly) BOOL shouldShowAlternateHeadlines; 
@property (nonatomic,readonly) long long singleTopicFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long singleChannelFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long maxRetriesForDroppedFeeds; 
@property (nonatomic,readonly) double delayBeforeRetryingDroppedFeeds; 
@property (nonatomic,readonly) FCPaidBundleConfiguration * paidBundleConfig;                                                           //@synthesize paidBundleConfig=_paidBundleConfig - In the implementation block
@property (nonatomic,readonly) NSString * magazinesConfigRecordID; 
@property (nonatomic,readonly) long long entitlementsCacheRecoveryAttemptDurationInSeconds; 
@property (nonatomic,readonly) NSString * spotlightChannelID; 
@property (nonatomic,readonly) double feedLineHeightMultiplier; 
@property (nonatomic,readonly) NSArray * aLaCartePaidSubscriptionGroupWhitelistedChannelIDs; 
@property (nonatomic,readonly) NSString * todayFeedKnobs; 
@property (nonatomic,readonly) NSString * alternateUniversalLinksResourceID; 
@property (nonatomic,readonly) long long alternateUniversalLinksResourceRefreshRate; 
@property (nonatomic,readonly) long long alternateUniversalLinksBannerPresentationCount; 
@property (nonatomic,readonly) BOOL alternateUniversalLinksEnabledDefaultForPurchaser; 
@property (nonatomic,readonly) BOOL alternateUniversalLinksEnabledDefaultForFamilyMember; 
@property (nonatomic,readonly) NSString * audioConfigRecordID; 
@property (nonatomic,readonly) BOOL usePersonalizationVectorAlt; 
@property (nonatomic,readonly) BOOL recordBothPersonalizationVectors; 
@property (nonatomic,readonly) long long widgetForYouForegroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long widgetForYouBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) BOOL enableCacheFallbackForArticleRecirculation; 
@property (nonatomic,readonly) BOOL privateDataShouldSecureSubscriptions;                                                              //@synthesize privateDataShouldSecureSubscriptions=_privateDataShouldSecureSubscriptions - In the implementation block
@property (getter=isPrivateDataEncryptionRequired,nonatomic,readonly) BOOL privateDataEncryptionRequired;                              //@synthesize privateDataEncryptionRequired=_privateDataEncryptionRequired - In the implementation block
@property (nonatomic,readonly) long long maximumRetryAfterForCK; 
@property (nonatomic,readonly) BOOL todayFeedEnabled; 
@property (nonatomic,readonly) BOOL tagFeedEnabled; 
@property (nonatomic,readonly) BOOL searchFeedEnabled; 
@property (nonatomic,readonly) BOOL newAdsEnabled; 
@property (nonatomic,readonly) BOOL newNotificationHandlingEnabled; 
@property (nonatomic,readonly) BOOL newPersonalizationEnabled; 
@property (nonatomic,readonly) BOOL xavierEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfigurationForStoreFrontID:(id)arg1 ;
+(id)defaultForYouRecordConfigIDByLocalizedStorefrontID;
+(id)overrideWidgetSectionConfigID;
+(id)defaultMagazinesConfigRecordIDByLocalizedStorefrontID;
+(id)overrideForYouConfigID;
+(id)defaultAudioConfigRecordIDByLocalizedStorefrontID;
+(id)languageConfigDictionaryForConfig:(id)arg1 preferredLanguageTags:(id)arg2 ;
+(id)configurationWithData:(id)arg1 storefrontID:(id)arg2 preferredLanguageTags:(id)arg3 ;
+(id)defaultWidgetRecordConfigIDByLocalizedStorefrontID;
-(long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
-(long long)appConfigRefreshRate;
-(BOOL)isDefaultConfiguration;
-(long long)alternateUniversalLinksResourceRefreshRate;
-(BOOL)recordBothPersonalizationVectors;
-(NSString *)feedNavigationConfigJSON;
-(FCVideoGroupsConfig *)forYouVideoGroupsConfig;
-(NSString *)storefrontID;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSString *)exploreArticleID;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3 lastModificationDate:(id)arg4 ;
-(long long)lowStorageThreshold;
-(BOOL)isPrivateDataEncryptionAllowed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)disableThumbnailsForArticleRecirculation;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(unsigned)widgetMinimumNumberOfTimesPreseenToBeSeen;
-(NSString *)localAreasMappingResourceId;
-(long long)subscriptionsPlacardGlobalMaximumPerDay;
-(BOOL)shouldShowAlternateHeadlines;
-(NSString *)issueArticleRecirculationConfigJSON;
-(NSString *)alternateUniversalLinksResourceID;
-(NSString *)breakingNewsChannelID;
-(void)_loadNotificationsConfiguration;
-(long long)stateRestorationAllowedTimeWindow;
-(NSString *)webEmbedContentBlockers;
-(long long)maxRetriesForDroppedFeeds;
-(BOOL)isOrderFeedEndpointEnabled;
-(long long)minimumDurationBetweenTrendingGroupsWeekend;
-(NSDictionary *)endpointConfigsByEnvironment;
-(BOOL)tagFeedEnabled;
-(long long)singleTopicFeedMinFeedItemsPerRequest;
-(id)personalizationTreatment;
-(BOOL)notificationAssetPrefetchingRequiresWatch;
-(long long)criticalStorageThreshold;
-(NSDictionary *)configDictionary;
-(void)_loadiAdConfiguration;
-(unsigned long long)bestOfBundleFeedGroupKind;
-(long long)articleRapidUpdatesTimeout;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(NSArray *)presubscribedFeedIDs;
-(NSString *)editorialGemsSectionID;
-(BOOL)enableBadgeInSpotlightTabBar;
-(long long)minimumDurationBetweenForYouGroupsWeekend;
-(NSArray *)externalAnalyticsConfigurations;
-(long long)newsletterSubscriptionType;
-(BOOL)diversifyOptionalTopStories;
-(long long)maximumTrendingGroupSizeiPad;
-(long long)notificationArticleCacheTimeout;
-(long long)corryBarMaxArticleCountForArticleList;
-(long long)corryBarMaxArticleCountForSingleArticle;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(BOOL)enableCacheFallbackForArticleRecirculation;
-(BOOL)newNotificationHandlingEnabled;
-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1 ;
-(BOOL)alternateUniversalLinksEnabledDefaultForFamilyMember;
-(BOOL)notificationEnableAssetPrefetching;
-(double)delayBeforeRetryingDroppedFeeds;
-(BOOL)useSecureConnectionForAssets;
-(NSString *)conversionCohortsExpField;
-(long long)singleChannelFeedMinFeedItemsPerRequest;
-(BOOL)searchFeedEnabled;
-(long long)expirePinnedArticlesAfter;
-(NSString *)trendingTagID;
-(double)interstitialAdLoadDelay;
-(BOOL)widgetContentPrefetchEnabled;
-(void)_loadPaidBundleConfigurationForStorefrontID:(id)arg1 ;
-(void)_loadTopStoriesConfiguration;
-(long long)savedArticlesMaximumCountCellular;
-(long long)minimumDurationBetweenTrendingGroupsWeekday;
-(NSString *)userVectorModelResourceId;
-(double)tileProminenceScoreBalanceValue;
-(NSString *)embedConfigurationAssetID;
-(FCNotificationsConfiguration *)notificationsConfig;
-(void)_loadWidgetConfiguration;
-(long long)maximumNumberOfExpiredPaidSubscriptionGroups;
-(void)_loadPrivateDataEncryptionConfiguration;
-(BOOL)enableLocationBasedAutofavorites;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 languageConfigDictionary:(id)arg3 ;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(unsigned long long)trendingStyle;
-(double)minimumTrendingUnseenRatio;
-(id)init;
-(long long)subscriptionsGlobalMeteredCount;
-(BOOL)isExpired;
-(NSDictionary *)analyticsContentTypeConfigsByContentTypeByEnvironment;
-(NSString *)articleRecirculationConfigJSON;
-(NSString *)anfRenderingConfiguration;
-(id)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1 ;
-(NSString *)tagFeedLayoutConfigurationResourceId;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(double)parsecPopulationFloor;
-(NSString *)magazinesConfigRecordID;
-(long long)feedContentExposureTestMaximumInterval;
-(long long)maximumPaidSubscriptionGroupSizeiPad;
-(long long)minimumDurationBetweenForYouGroupsWeekday;
-(double)feedLineHeightMultiplier;
-(NSString *)personalizationWhitelistResourceId;
-(NSArray *)topStoriesPublishDates;
-(void)_loadEndpointConfiguration;
-(NSString *)personalizationBundleIdMappingResourceId;
-(NSDate *)lastModificationDate;
-(id)localizedStorefrontID;
-(FCWidgetConfig *)widgetConfig;
-(NSString *)editorialChannelID;
-(long long)maximumPaidSubscriptionGroupSizeiPhone;
-(void)_loadForYouGroupsConfiguration;
-(NSString *)translationMapResourceID;
-(BOOL)privateDataShouldSecureSubscriptions;
-(NSString *)spotlightChannelID;
-(double)endOfArticleMinPaidHeadlineRatio;
-(NSString *)engagementCohortsExpField;
-(NSArray *)aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
-(long long)widgetForYouBackgroundMinimumUpdateInterval;
-(void)_loadPrefetchConfiguration;
-(NSString *)todayFeedKnobs;
-(NSString *)personalizationFavorabilityResourceId;
-(NSString *)userVectorWhitelistResourceId;
-(long long)savedArticlesOpenedCutoffTime;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(double)newsletterSubscriptionStatusCacheTimeout;
-(FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
-(double)articleDiversificationSimilarityExpectationEnd;
-(NSArray *)mediaSharingBlacklistedChannelIDs;
-(BOOL)isPrivateDataEncryptionRequired;
-(long long)autoScrollToTopFeedTimeout;
-(FCPaidBundleConfiguration *)paidBundleConfig;
-(BOOL)isArticleToolbarCompressionEnabled;
-(BOOL)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
-(long long)maximumTimesHeadlineInPaidSubscriptionGroup;
-(BOOL)forYouGroupShouldPromoteAccessibleHeadline;
-(NSString *)forYouRecordConfigID;
-(FCPrefetchConfiguration *)prefetchConfig;
-(long long)autoRefreshMinimumInterval;
-(NSString *)audioConfigRecordID;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(void)setExternalAnalyticsConfigurations:(NSArray *)arg1 ;
-(NSArray *)onboardingFeedIDs;
-(NSString *)articleRecirculationComponentPlacementConfigJSON;
-(id)todayConfigWithIdentifier:(id)arg1 queueConfigs:(id)arg2 backgroundColorLight:(id)arg3 backgroundColorDark:(id)arg4 audioIndicatorColor:(id)arg5 ;
-(BOOL)isPrivateDataEncryptionMigrationDesired;
-(NSString *)featuredStoriesTagID;
-(long long)analyticsEndpointMaxPayloadSize;
-(NSArray *)hiddenFeedIDs;
-(long long)savedArticlesMaximumCountWiFi;
-(long long)trendingTopicsRefreshRate;
-(long long)maximumRetryAfterForCK;
-(NSString *)widgetConfigID;
-(long long)savedArticlesCutoffTime;
-(long long)widgetForYouForegroundMinimumUpdateInterval;
-(id)jsonEncodableObject;
-(BOOL)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
-(long long)optionalTopStoriesRefreshRate;
-(long long)articleRecirculationPopularFeedQueryTimeRange;
-(void)_loadDiscoverMoreVideosConfiguration;
-(BOOL)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
-(long long)articleReadCountThreshold;
-(long long)endOfArticleMaxInaccessiblePaidArticleCount;
-(BOOL)newPersonalizationEnabled;
-(BOOL)newAdsEnabled;
-(long long)entitlementsCacheRecoveryAttemptDurationInSeconds;
-(NSString *)experimentalizableFieldPostfix;
-(NTPBDiscoverMoreVideosInfo *)shareDiscoverMoreVideosInfo;
-(BOOL)todayFeedEnabled;
-(BOOL)isPrivateDataMigrationCleanupEnabled;
-(NSString *)briefingsTagID;
-(NSString *)savedStoriesTagID;
-(long long)alternateUniversalLinksBannerPresentationCount;
-(double)adRequestThrottle;
-(long long)newFavoriteNotificationAlertsFrequency;
-(double)parsecPopulationCeiling;
-(BOOL)usePersonalizationVectorAlt;
-(long long)subscriptionsPlacardPublisherFrequencyInSeconds;
-(NSString *)description;
-(FCPersonalizationTreatment *)cachedPersonalizationTreatment;
-(BOOL)xavierEnabled;
-(double)articleDiversificationSimilarityExpectationStart;
-(NSNumber *)currentTreatment;
-(FCIAdConfiguration *)iAdConfig;
-(BOOL)universalLinksEnabled;
-(long long)emailSignupRequiredAppLaunchCount;
-(NSString *)webEmbedContentBlockerOverrides;
-(double)prerollLoadingTimeout;
-(unsigned long long)likeDislikeBehavior;
-(NSString *)personalizationUrlMappingResourceId;
-(BOOL)alternateUniversalLinksEnabledDefaultForPurchaser;
-(NSDictionary *)languageConfigDictionary;
-(long long)maximumTrendingGroupSizeiPhone;
@end
