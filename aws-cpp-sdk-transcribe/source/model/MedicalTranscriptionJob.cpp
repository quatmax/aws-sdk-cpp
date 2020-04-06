﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transcribe/model/MedicalTranscriptionJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

MedicalTranscriptionJob::MedicalTranscriptionJob() : 
    m_medicalTranscriptionJobNameHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaFormat(MediaFormat::NOT_SET),
    m_mediaFormatHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_transcriptHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

MedicalTranscriptionJob::MedicalTranscriptionJob(JsonView jsonValue) : 
    m_medicalTranscriptionJobNameHasBeenSet(false),
    m_transcriptionJobStatus(TranscriptionJobStatus::NOT_SET),
    m_transcriptionJobStatusHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaFormat(MediaFormat::NOT_SET),
    m_mediaFormatHasBeenSet(false),
    m_mediaHasBeenSet(false),
    m_transcriptHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalTranscriptionJob& MedicalTranscriptionJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MedicalTranscriptionJobName"))
  {
    m_medicalTranscriptionJobName = jsonValue.GetString("MedicalTranscriptionJobName");

    m_medicalTranscriptionJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptionJobStatus"))
  {
    m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(jsonValue.GetString("TranscriptionJobStatus"));

    m_transcriptionJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaSampleRateHertz"))
  {
    m_mediaSampleRateHertz = jsonValue.GetInteger("MediaSampleRateHertz");

    m_mediaSampleRateHertzHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaFormat"))
  {
    m_mediaFormat = MediaFormatMapper::GetMediaFormatForName(jsonValue.GetString("MediaFormat"));

    m_mediaFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Media"))
  {
    m_media = jsonValue.GetObject("Media");

    m_mediaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Specialty"))
  {
    m_specialty = SpecialtyMapper::GetSpecialtyForName(jsonValue.GetString("Specialty"));

    m_specialtyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalTranscriptionJob::Jsonize() const
{
  JsonValue payload;

  if(m_medicalTranscriptionJobNameHasBeenSet)
  {
   payload.WithString("MedicalTranscriptionJobName", m_medicalTranscriptionJobName);

  }

  if(m_transcriptionJobStatusHasBeenSet)
  {
   payload.WithString("TranscriptionJobStatus", TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
   payload.WithInteger("MediaSampleRateHertz", m_mediaSampleRateHertz);

  }

  if(m_mediaFormatHasBeenSet)
  {
   payload.WithString("MediaFormat", MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat));
  }

  if(m_mediaHasBeenSet)
  {
   payload.WithObject("Media", m_media.Jsonize());

  }

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_specialtyHasBeenSet)
  {
   payload.WithString("Specialty", SpecialtyMapper::GetNameForSpecialty(m_specialty));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
