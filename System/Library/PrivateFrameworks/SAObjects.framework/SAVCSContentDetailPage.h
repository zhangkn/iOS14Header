/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource, NSURL;

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * imagesJsonContentPayload; 
@property (assign,nonatomic) BOOL isEvod; 
@property (nonatomic,copy) NSString * loadingText; 
@property (nonatomic,copy) NSString * seasonId; 
@property (nonatomic,copy) NSString * showId; 
@property (nonatomic,copy) NSURL * url; 
@property (assign,nonatomic) BOOL userDriven; 
@property (nonatomic,copy) NSString * utsId; 
@property (nonatomic,copy) NSURL * utsSearchUrl; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(NSString *)contentType;
-(id)encodedClassName;
-(BOOL)isEvod;
-(id)groupIdentifier;
-(NSString *)utsId;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)showId;
-(SAUIImageResource *)image;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)seasonId;
-(NSURL *)url;
-(NSString *)loadingText;
-(NSString *)imagesJsonContentPayload;
-(void)setImagesJsonContentPayload:(NSString *)arg1 ;
-(void)setLoadingText:(NSString *)arg1 ;
-(void)setSeasonId:(NSString *)arg1 ;
-(void)setShowId:(NSString *)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(void)setUtsId:(NSString *)arg1 ;
-(NSURL *)utsSearchUrl;
-(void)setUtsSearchUrl:(NSURL *)arg1 ;
@end

