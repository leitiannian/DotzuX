//
//  DotzuX.swift
//  demo
//
//  Created by liman on 26/11/2017.
//  Copyright © 2017 Apple. All rights reserved.
//

typedef enum {
    JSONRequestSerializer = 0,//JSON格式
    FormRequestSerializer = 1,//Form格式
} RequestSerializer;

#import <Foundation/Foundation.h>

@interface HttpModel : NSObject

@property (nonatomic,copy)NSURL     *url;
@property (nonatomic,copy)NSData    *requestData;
@property (nonatomic,copy)NSData    *responseData;
@property (nonatomic,copy)NSString  *requestId;
@property (nonatomic,copy)NSString  *method;
@property (nonatomic,copy)NSString  *statusCode;
@property (nonatomic,copy)NSString  *mineType;
@property (nonatomic,copy)NSString  *startTime;
@property (nonatomic,copy)NSString  *endTime;
@property (nonatomic,copy)NSString  *totalDuration;
@property (nonatomic,assign)BOOL    isImage;


@property (nonatomic,copy)NSDictionary<NSString*, id>           *headerFields;
@property (nonatomic,copy)NSDictionary<NSString*, id>           *redirectHeaderFields;
@property (nonatomic,assign)BOOL                                isTag;
@property (nonatomic,assign)BOOL                                isSelected;
@property (nonatomic,assign)RequestSerializer                   requestSerializer;//默认JSON格式
@property (nonatomic,copy)NSString                              *errorDescription;
@property (nonatomic,copy)NSString                              *errorLocalizedDescription;

@end
