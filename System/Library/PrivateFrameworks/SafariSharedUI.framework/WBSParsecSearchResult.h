/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, WBSParsecActionButton, MKMapItem, WBSParsecImageRepresentation;


@protocol WBSParsecSearchResult
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * feedbackIdentifier; 
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@property (nonatomic,readonly) NSString * completion; 
@property (nonatomic,copy,readonly) NSString * query; 
@property (nonatomic,readonly) unsigned long long minimumRankOfTopHitToSuppressResult; 
@property (nonatomic,readonly) NSURL * appPunchoutURL; 
@property (nonatomic,copy,readonly) NSString * mediaKind; 
@property (nonatomic,copy,readonly) NSString * referrerForLoadingResult; 
@property (nonatomic,readonly) WBSParsecActionButton * actionButton; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,copy,readonly) NSString * sectionBundleIdentifier; 
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon; 
@property (nonatomic,readonly) WBSParsecImageRepresentation * completionIcon; 
@required
-(NSString *)query;
-(NSString *)urlString;
-(NSString *)identifier;
-(NSString *)mediaKind;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(WBSParsecImageRepresentation *)completionIcon;
-(NSString *)descriptionText;
-(NSString *)title;
-(WBSParsecImageRepresentation *)icon;
-(NSString *)completion;
-(NSString *)sectionHeader;
-(WBSParsecActionButton *)actionButton;
-(MKMapItem *)mapItem;
-(NSString *)sectionBundleIdentifier;
-(BOOL)canBecomeTopHitForQuery:(id)arg1;
-(id)iconWithSession:(id)arg1;
-(id)completionIconWithSession:(id)arg1;
-(NSString *)feedbackIdentifier;
-(NSURL *)appPunchoutURL;
-(NSString *)referrerForLoadingResult;

@end
