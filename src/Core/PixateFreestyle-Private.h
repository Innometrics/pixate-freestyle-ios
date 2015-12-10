/*
 * Copyright 2012-present Pixate, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  Pixate.h
//  Pixate
//
//  Created by Paul Colton on 02/01/13.
//  Copyright (c) 2012 Pixate, Inc. All rights reserved.
//

// Make the readonly public properties writable by us
#import "PixateFreestyle.h"

@interface PixateFreestyle()

@property (nonatomic, strong, readwrite) NSString *version;
@property (nonatomic, strong, readwrite) NSDate *buildDate;
@property (nonatomic, readwrite) int apiVersion;
@property (nonatomic, readwrite) BOOL titaniumMode;
@property (nonatomic, strong, readonly) PixateFreestyleConfiguration *configuration;

/**
 * The shared instance of the Pixate singleton.
 */
+ (PixateFreestyle *)sharedInstance;

@end
