/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPAccessObject, NSString;

@interface TVPImageFetchRecord : NSObject {

	BOOL _isActive;
	int _priority;
	TVPAccessObject* _accessObject;
	id _imageToken;
	NSString* _assetID;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) TVPAccessObject * accessObject;              //@synthesize accessObject=_accessObject - In the implementation block
@property (nonatomic,retain,readonly) id imageToken;                               //@synthesize imageToken=_imageToken - In the implementation block
@property (nonatomic,retain,readonly) NSString * assetID;                          //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) int priority;                                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                        //@synthesize isActive=_isActive - In the implementation block
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(BOOL)isActive;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setIsActive:(BOOL)arg1 ;
-(NSString *)assetID;
-(id)initWithAccessObject:(id)arg1 imageToken:(id)arg2 assetID:(id)arg3 ;
-(TVPAccessObject *)accessObject;
-(id)imageToken;
@end

