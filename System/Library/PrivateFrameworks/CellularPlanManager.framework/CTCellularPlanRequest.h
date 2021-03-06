/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSArray, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLResponse, NSError, NSURLConnection, NSData, NSString;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {

	int nextConnectionTypeIndex;
	NSArray* _responseCookies;
	NSArray* _requestCookies;
	NSDictionary* _internetSettings;
	NSDictionary* _bootstrapSettings;
	NSMutableData* _receivedData;
	NSMutableURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	dispatch_queue_sRef _queue;
	/*^block*/id _completionBlock;
	NSURLConnection* _connection;

}

@property (assign,nonatomic) dispatch_queue_sRef queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;               //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) NSData * serializedCookies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isRetriableErrorCode:(long long)arg1 ;
+(id)connectionSettingsForServiceType:(long long)arg1 ;
+(id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2 ;
+(id)loadPlansRequestWithUrl:(id)arg1 postData:(id)arg2 ;
+(void)setBootstrapConnectionSettings:(id)arg1 ;
+(void)setRequestUrls:(id)arg1 ;
+(void)setInternetConnectionSettings:(id)arg1 ;
+(id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3 ;
+(id)createSessionRequest;
+(id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3 ;
+(id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4 ;
+(id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2 ;
-(NSMutableData *)receivedData;
-(void)setCompletionBlock:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)_isRetryableError:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(dispatch_queue_sRef)queue;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)_callback;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(NSURLResponse *)response;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSData *)serializedCookies;
-(void)startRequestWithReplyQueue:(dispatch_queue_sRef)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6 ;
-(BOOL)_canTryAnotherConnectionType;
-(id)_connectionSettingsForNextConnectionType;
-(void)_startRequestWithNextConnectionTypeOrFail;
-(id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 ;
-(id)initGetWithUrl:(id)arg1 ;
-(id)initPostWithUrl:(id)arg1 ;
-(id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 ;
-(id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4 ;
-(void)setSerializedCookies:(NSData *)arg1 ;
@end

